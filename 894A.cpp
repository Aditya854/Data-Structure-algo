wait(s){
    while(s<=0);
    s=s-1;
}

signal(s){
    s=s+1;
}

do{
  wait(s);
  // critical section
  signal(s);
//   remainder section
}while(T)