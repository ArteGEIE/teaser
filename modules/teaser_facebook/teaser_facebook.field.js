(function(d, s, id) {
  var lang = document.documentElement.getAttribute('lang') == 'fr' ? 'fr_FR' : 'de_DE';
  var js, fjs = d.getElementsByTagName(s)[0];
  if (d.getElementById(id)) return;
  js = d.createElement(s); js.id = id;
  js.src = "//connect.facebook.net/" + lang + "/sdk.js#xfbml=1&version=v2.3&appId=346606188767682";
  fjs.parentNode.insertBefore(js, fjs);
}(document, 'script', 'facebook-jssdk'));