#include <iostream>

using namespace std;

int main()
{
float M,EX,EV,TST,LB,PR,S;
    cout <<"PARCIAL 1 "                        << endl;
    cout <<"INGRESE LA NOTA DEL MAPA MENTAL "  << endl;
    cin >> M  ;

    if(M <= 2 ){
    }
    else  {
    cout << "INGRESE LA NOTA CORRECTAMENTE (0-2)  " << endl ;
    cin >> M;
    }
    cout <<"INGRESE LA NOTA DE LA EXPOSICION "  << endl;
    cin >> EX ;
    if(EX <= 2 ){
    }
    else  {
    cout << "INGRESE LA NOTA CORRECTAMENTE  (0-2) "  << endl ;
    cin >> EX;
    }
    cout <<"INGRESE LA NOTA DEL LA EVALUACION "  << endl;
    cin >> EV ;
    if(EV <= 7 ){
    }
    else  {
    cout << "INGRESE LA NOTA CORRECTAMENTE  (0-7) "   << endl ;
    cin >> EV;
    }
    cout <<"INGRESE LA NOTA DEL TEST         "   << endl;
    cin >> TST;
    if(TST <= 3 ){
    }
    else  {
    cout << "INGRESE LA NOTA CORRECTAMENTE (0-3) "   << endl ;
    cin >> TST;
    }
    cout <<"INGRESE LA NOTA DEL LABORATORIO  "   << endl;
    cin >> LB ;
    if(LB <= 3 ){
    }
    else  {
    cout << "INGRESE LA NOTA CORRECTAMENTE (0-3) " << endl ;
    cin >> LB;
    }
    cout <<"INGRESE LA NOTA DEL PROYECTO "  << endl;
    cin >> PR ;
    if(PR <= 3 ){
    }
    else  {
    cout << "INGRESE LA NOTA CORRECTAMENTE (0-3) " << endl ;
    cin >> PR;
    }
    S = M+EX+EV+TST+LB+PR ;
    cout << "LA NOTA DEL PRIMER PARCIAL ES "<<S <<endl;
    cout << " " <<endl;

    // SEGUNDO PARCIAL

float m,ex,ev,tst,lb,pr,T;

    cout <<"PARCIAL 2 "                        << endl;
    cout <<"INGRESE LA NOTA DEL MAPA MENTAL "  << endl;
    cin >> m  ;

    if(m <= 2 ){
    }
    else  {
    cout << "INGRESE LA NOTA CORRECTAMENTE (0-2) "   << endl ;
    cin >> m;
    }
    cout <<"INGRESE LA NOTA DE LA EXPOSICION "  << endl;
    cin >> ex ;
    if(ex <= 2 ){
    }
    else  {
    cout << "INGRESE LA NOTA CORRECTAMENTE  (0-2)  "  << endl ;
    cin >> ex;
    }
    cout <<"INGRESE LA NOTA DEL LA EVALUACION "  << endl;
    cin >> ev ;
    if(ev <= 7 ){
    }
    else  {
    cout << "INGRESE LA NOTA CORRECTAMENTE (0-7)  "   << endl ;
    cin >> ev;
    }
    cout <<"INGRESE LA NOTA DEL TEST         "   << endl;
    cin >> tst;
    if(tst <= 3 ){
    }
    else  {
    cout << "INGRESE LA NOTA CORRECTAMENTE  (0-3) "   << endl ;
    cin >> tst;
    }
    cout <<"INGRESE LA NOTA DEL LABORATORIO  "   << endl;
    cin >> lb ;
    if(lb <= 3 ){
    }
    else  {
    cout << "INGRESE LA NOTA CORRECTAMENTE (0-3) " << endl ;
    cin >> lb;
    }
    cout <<"INGRESE LA NOTA DEL PROYECTO "   << endl;
    cin >> pr ;
    if(pr <= 3 ){
    }
    else  {
    cout << "INGRESE LA NOTA CORRECTAMENTE (0-3) " << endl ;
    cin >> pr;
    }
    T = m+ex+ev+tst+lb+pr ;
    cout << "LA NOTA DEL SEGUNDO PARCIAL ES "<< T <<endl;
    cout << " " <<endl;
    // PARCIAL 3

float A,B,C,D,E,F,G;

    cout <<"PARCIAL 3 "                         << endl;
    cout <<"INGRESE LA NOTA DEL MAPA MENTAL "   << endl;
    cin >> A  ;

    if(A <= 2 ){
    }
    else  {
    cout << "INGRESE LA NOTA CORRECTAMENTE (0-2) "   << endl ;
    cin >> A;
    }
    cout <<"INGRESE LA NOTA DE LA EXPOSICION "  << endl;
    cin >> B ;
    if(B <= 2 ){
    }
    else  {
    cout << "INGRESE LA NOTA CORRECTAMENTE  (0-2)  "  << endl ;
    cin >> B;
    }
    cout <<"INGRESE LA NOTA DEL LA EVALUACION "  << endl;
    cin >> C ;
    if(C <= 7 ){
    }
    else  {
    cout << "INGRESE LA NOTA CORRECTAMENTE  (0-7) "   << endl ;
    cin >> C;
    }
    cout <<"INGRESE LA NOTA DEL TEST         "   << endl;
    cin >> D;
    if(D <= 3 ){
    }
    else  {
    cout << "INGRESE LA NOTA CORRECTAMENTE  (0-3) "   << endl ;
    cin >> D;
    }
    cout <<"INGRESE LA NOTA DEL LABORATORIO  "   << endl;
    cin >> E ;
    if(E <= 3 ){
    }
    else  {
    cout << "INGRESE LA NOTA CORRECTAMENTE (0-3) " << endl ;
    cin >> E;
    }
    cout <<"INGRESE LA NOTA DEL PROYECTO "   << endl;
    cin >> F ;
    if(F <= 3 ){
    }
    else  {
    cout << "INGRESE LA NOTA CORRECTAMENTE (0-3) " << endl ;
    cin >> F;
    }
    G = A+B+C+D+E+F ;
    cout << "LA NOTA DEL TERCER PARCIAL ES " << G <<endl;
    cout << " " <<endl;
float Z,X;

    Z=S+T+G ;
    X=Z/3   ;
    if(X >= 14 )
    {
    cout << "APRUEBA DEL SEMESTRE CON "      << X << endl;
    }
    else {
    cout << "REPRUEBA EL SEMESTRE CON "      << X << endl;
    }
    return 0;

}
