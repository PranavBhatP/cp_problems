class WhoLikesIt {
    public static String Solution(String... names) {
      String ans = "";  
      if(names.length == 0){
        ans = "no one likes this";
      }
      else if(names.length==1){
        ans = names[0]+" likes this";
      }
      else if(names.length==2){
        ans  = names[0]+" and "+names[1]+" like this";
      }
      else if(names.length==3){
        ans  = names[0]+", "+names[1]+" and "+names[2]+" like this";
      }
      else{
        ans  = names[0]+", "+names[1]+" and "+(names.length-2)+" others like this";
      }
      return ans.trim();
    }
}