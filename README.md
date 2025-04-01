Criação da chave GPG:
ramal@DESKTOP-3NJVFL5 MINGW64 ~
$ gpg --list-keys --keyid-format=long

ramal@DESKTOP-3NJVFL5 MINGW64 ~
$ gpg --armor --export 070162074C5234558A95A662704A41A33237627F
gpg: WARNING: nothing exported

ramal@DESKTOP-3NJVFL5 MINGW64 ~
$ gpg --list-keys

ramal@DESKTOP-3NJVFL5 MINGW64 ~
$ ^[[200~gpg --full-generate-key
bash: $'\E[200~gpg': command not found

ramal@DESKTOP-3NJVFL5 MINGW64 ~
$ gpg --full-generate-key
gpg (GnuPG) 2.4.5-unknown; Copyright (C) 2024 g10 Code GmbH
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.

Please select what kind of key you want:
   (1) RSA and RSA
   (2) DSA and Elgamal
   (3) DSA (sign only)
   (4) RSA (sign only)
   (9) ECC (sign and encrypt) *default*
  (10) ECC (sign only)
  (14) Existing key from card
Your selection? 1
RSA keys may be between 1024 and 4096 bits long.
What keysize do you want? (3072) 4096
Requested keysize is 4096 bits
Please specify how long the key should be valid.
         0 = key does not expire
      <n>  = key expires in n days
      <n>w = key expires in n weeks
      <n>m = key expires in n months
      <n>y = key expires in n years
Key is valid for? (0) 1y
Key expires at Sat Mar 28 18:19:57 2026
Is this correct? (y/N) y

GnuPG needs to construct a user ID to identify your key.

Real name: tecla-king
Email address: lucasramalho2004@hotmail.com
Comment: Programação avançada
You are using the 'utf-8' character set.
You selected this USER-ID:
    "tecla-king (Programação avançada) <lucasramalho2004@hotmail.com>"

Change (N)ame, (C)omment, (E)mail or (O)kay/(Q)uit? o
We need to generate a lot of random bytes. It is a good idea to perform
some other action (type on the keyboard, move the mouse, utilize the
disks) during the prime generation; this gives the random number
generator a better chance to gain enough entropy.
We need to generate a lot of random bytes. It is a good idea to perform
some other action (type on the keyboard, move the mouse, utilize the
disks) during the prime generation; this gives the random number
generator a better chance to gain enough entropy.
gpg: directory '/c/Users/ramal/.gnupg/openpgp-revocs.d' created
gpg: revocation certificate stored as '/c/Users/ramal/.gnupg/openpgp-revocs.d/CBAFA26789C5B486863987265EDF0C9F980CD3E3.rev'
public and secret key created and signed.

pub   rsa4096 2025-03-28 [SC] [expires: 2026-03-28]
      CBAFA26789C5B486863987265EDF0C9F980CD3E3
uid                      tecla-king (Programação avançada) <lucasramalho2004@hotmail.com>
sub   rsa4096 2025-03-28 [E] [expires: 2026-03-28]


ramal@DESKTOP-3NJVFL5 MINGW64 ~
$ gpg --list-secret-keys --keyid-format=long
gpg: checking the trustdb
gpg: marginals needed: 3  completes needed: 1  trust model: pgp
gpg: depth: 0  valid:   1  signed:   0  trust: 0-, 0q, 0n, 0m, 0f, 1u
gpg: next trustdb check due at 2026-03-28
[keyboxd]
---------
sec   rsa4096/5EDF0C9F980CD3E3 2025-03-28 [SC] [expires: 2026-03-28]
      CBAFA26789C5B486863987265EDF0C9F980CD3E3
uid                 [ultimate] tecla-king (Programação avançada) <lucasramalho2004@hotmail.com>
ssb   rsa4096/584DFF887477AF9B 2025-03-28 [E] [expires: 2026-03-28]


ramal@DESKTOP-3NJVFL5 MINGW64 ~
$ ~^C

ramal@DESKTOP-3NJVFL5 MINGW64 ~
$ gpg --armor --export 5EDF0C9F980CD3E3
-----BEGIN PGP PUBLIC KEY BLOCK-----

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
=DH7I
-----END PGP PUBLIC KEY BLOCK-----

ramal@DESKTOP-3NJVFL5 MINGW64 ~
$ ^[[200~git config --global user.signingkey 5EDF0C9F980CD3E3
bash: $'\E[200~git': command not found

ramal@DESKTOP-3NJVFL5 MINGW64 ~
$ git config --global commit.gpgsign true

ramal@DESKTOP-3NJVFL5 MINGW64 ~
$ git confg --global user.LucasGOWRamalho 5EDF0C980CD3E3
git: 'confg' is not a git command. See 'git --help'.

The most similar command is
        config

ramal@DESKTOP-3NJVFL5 MINGW64 ~
$ git confg --global user.LucasGOWRamalho 5EDF0C980CD3E3
git: 'confg' is not a git command. See 'git --help'.

The most similar command is
        config

ramal@DESKTOP-3NJVFL5 MINGW64 ~
$ git config --global user.email "lucasramalho2004@hotmail.com"

ramal@DESKTOP-3NJVFL5 MINGW64 ~
$ git config --global commit.gpgsign true

ramal@DESKTOP-3NJVFL5 MINGW64 ~
$ git config --global user.signingkey 5EDF0C9F980CD3E3
git config --global commit.gpgsign true

ramal@DESKTOP-3NJVFL5 MINGW64 ~
$ git config --global user.name "LucasGOWRamalho"
git config --global user.email "lucasramalho2004@hotmail.com"

ramal@DESKTOP-3NJVFL5 MINGW64 ~
$




Alterações no código: README - Alterações no Código Warmup Solver

Visão Geral

Este documento descreve as principais alterações realizadas na implementação da função solve_warmup e check_warmup_solution do arquivo warmup_solver.c. As modificações visam melhorar a segurança, eficiência e funcionalidade do código.

Principais Alterações

1. Correção de Buffer Overflow

O tamanho do buffer out_file foi aumentado de 100 para 200 caracteres para evitar estouro de buffer.

Foi removida a concatenação insegura de strings usando strcat(out_file, warmup_instance), evitando a possibilidade de sobreposição de memória.


2. Implementação da Lógica de Processamento

Antes, a função solve_warmup apenas copiava os dados do arquivo de resposta para o arquivo de solução sem realizar nenhum processamento.

Agora, o programa lê a string do arquivo de entrada, processa os números contidos nela e calcula a média dos valores.

Implementação da lógica para interpretar corretamente o número 10 e somá-lo de forma apropriada.


3. Melhor Tratamento de Erros

Mensagens de erro detalhadas foram adicionadas para informar ao usuário quando não é possível abrir um arquivo.

Se a string de entrada estiver vazia ou não contiver números válidos, uma mensagem de erro é gravada no arquivo de solução.

O programa agora encerra corretamente os arquivos em caso de erro para evitar vazamento de recursos.


4. Correção na Comparação das Soluções

Na versão anterior, a função check_warmup_solution podia falhar na leitura de linhas vazias.

Agora, ambas as linhas dos arquivos são comparadas corretamente, garantindo que todo o conteúdo seja verificado.


Resumo das Melhorias

Essas melhorias tornam o programa mais seguro, confiável e funcional.

