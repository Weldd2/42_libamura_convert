# Nom du compilateur
CC = gcc

# Répertoire de base pour les dépendances
LIB_DIR = ..

# Options de compilation avec les répertoires include des dépendances
CFLAGS = -Wall -Wextra -Werror

# Répertoires
SRC_DIR = src
OBJ_DIR = obj
INCLUDE_DIR = include

# Nom de la bibliothèque
LIB = convert.a

# Liste des fichiers sources (.c) dans src et ses sous-répertoires
SRCS = $(shell find $(SRC_DIR) -type f -name "*.c")

# Transformation des fichiers sources en fichiers objets correspondants dans obj
OBJS = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRCS))

# Cible par défaut
all: $(LIB)

# Règle pour créer la bibliothèque statique
$(LIB): $(OBJS)
	@echo "Création de la bibliothèque $@"
	ar rcs $@ $^

# Règle pour compiler les fichiers objets
# Inclut les fichiers d'en-tête avec -include pour chaque dépendance
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -I./$(INCLUDE_DIR) -c $< -o $@

# Nettoyage des fichiers objets
clean:
	@echo "Suppression des fichiers objets..."
	find $(OBJ_DIR) -type f -name "*.o" -delete

# Nettoyage complet (objets + bibliothèque)
fclean: clean
	@echo "Suppression de la bibliothèque $(LIB)"
	rm -f $(LIB)

# Recompilation complète
re: fclean all

# Indique que ces cibles ne sont pas des fichiers
.PHONY: all dependencies clean fclean re
