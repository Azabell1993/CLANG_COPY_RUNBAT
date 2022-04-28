# CLANG_COPY_RUNBAT

윈도우 운영체제에서의 터미널 환경내 파일 카피를 도와주는 프로그램입니다.  
기초적인 연습 파일이므로 클론해서 연습하셔도 좋습니다.  


> run.bat  
  
```
gcc -c -o ShowErrorMsg.o ShowErrorMsg.c
gcc -o copy.exe copy.c ShowErrorMsg.o
gcc -c -DBUILD_MY_DLL ShowErrorMsg.c
gcc  -shared -o ShowErrorMsg.dll ShowErrorMsg.o -Wl,--out-implib,lib-ShowErrorMsg.a
```  
  
![image](https://user-images.githubusercontent.com/75885992/165692984-3ac5bcdd-f254-41cf-aedc-2fa54d4861cd.png)  
![image](https://user-images.githubusercontent.com/75885992/165692997-702ec53b-e348-4c55-a6bf-c95ba76c6ff3.png)  
  
> build 모습  
  
  ![image](https://user-images.githubusercontent.com/75885992/165693022-cd53934c-d102-4a9a-b723-344f07adc330.png)  
