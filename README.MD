# Testes unitários na linguagem C

O objetivo deste repositório é reunir informações sobre como efetuar testes unitário na linguagem C. Para isso será usado um código exemplo que simula uma calculadora.

## Biblioteca CUnit

### Instalando no linux Debian

```
sudo apt-get install libcunit1 libcunit1-doc libcunit1-dev
```

### Rodando

```
gcc -o teste cunit_calculadora.c -lcunit
```
```
./teste
```

## Biblioteca Check

### Instalando no linux Debian

```
sudo apt-get install check
```

### Rodando

```
gcc -o teste check_calculadora.c -lcheck -lm -lpthread -lrt
```
