  while (fgets(linha, sizeof(linha), arquivo_leitura) != NULL) {
        for (int i = 0; linha[i] != '\0'; i++) {
            char ch = tolower(linha[i]); // Converte o caractere para minúsculo
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                Total_Vogais++;
            }
        }