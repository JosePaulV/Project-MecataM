import serial as ser
import pyautogui as pag

data=ser.Serial('COM3',9600)
n=1

while n>0:
    incoming_data1=data.readline()
    string_n=incoming_data1.decode()
    C,D,A,B=string_n.split(" ")
    string1=A.rstrip()
    string2=B.rstrip()
    string1=float(string1)
    string2=float(string2)
    incoy=(40)*string2
    i=1080-incoy
    incox=(80)*string1
    j=incox
    cursor=pag.moveTo(j,i)
    if C=='a':
        pag.click(j,i,1,0,'right')
    if D=='b':
        pag.click(j,i,1,0,'left')
    n+=1
    
