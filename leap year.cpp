  case '*': 
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second); 
      break; 
    case '/': 
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second); 
      break; 
    // operator doesn't match any case constant 
    default: 
      printf("Error! operator is not correct");
