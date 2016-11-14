function click_handler () {

  $( "#img-toilet" ).click(function() {
      var src = $(this).attr("src");
      if (src == "toilet.jpg") {
        button2();
        $(this).attr("src","toilet-off.jpg");
      } else {
        button2_off();
        $(this).attr("src","toilet.jpg");
      }
  });

  $( "#img-home" ).click(function() {
    var src = $(this).attr("src");
    if (src == "home.jpg") {
      button5();
      $(this).attr("src","home-off.jpg");
    } else {
      button5_off();
      $(this).attr("src","home.jpg");
    }
  });

  $( "#img-coffee" ).click(function() {
    var src = $(this).attr("src");
    if (src == "coffee.jpg") {
      button6();
      $(this).attr("src","coffee-off.jpg");
    } else {
      button6_off();
      $(this).attr("src","coffee.jpg");
    }

  });

  $( "#img-richmond" ).click(function() {
    var src = $(this).attr("src");
    if (src == "richmond.jpg") {
      button4();
      $(this).attr("src","richmond-off.jpg");
    } else {
      button4_off();
      $(this).attr("src","richmond.jpg");
    }
  });

  $( "#img-ttc" ).click(function() {
    var src = $(this).attr("src");
    if (src == "ttc.jpg") {
      button3();
      $(this).attr("src","ttc-off.jpg");
    } else {
      button3_off();
      $(this).attr("src","ttc.jpg");
    }
  });

  $( "#img-mccaul" ).click(function() {
    var src = $(this).attr("src");

    if (src == "mccaul.jpg") {
      button1();
      $(this).attr("src","mccaul-off.jpg");
    } else {
      button1_off();
      $(this).attr("src","mccaul.jpg");
    }

  });

}
