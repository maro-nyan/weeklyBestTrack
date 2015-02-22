<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" lang="en">
  <head>
    <title>WeeklyBestTrack</title>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width; initial-scale=1.0; maximum-scale=1.0; user-scalable=0;">
    <script type="text/javascript" src="http://ajax.googleapis.com/ajax/libs/jquery/1.7.2/jquery.min.js"></script>
    <script type="text/javascript" src="./footerFixed.js"></script>
    <link rel="stylesheet" type="text/css" href="../maro/css/mystyle.css" />
  </head>
  <body>
    <div id="wrapper">
      <div id="headder">
        <div id="title_div">
          <img border="0" src="../maro/img/wbt_title.png" width="80%" height="70%" alt="title">
        </div>
        <img border="0" src="../maro/img/top.jpg" width="100%" height="100%" alt="top">
      </div>
      <div id="sign_in_twitter">
        <div  class="twitter_button" align="center">
          <img border="0" src="../maro/img/wbt_button.png" width="50%" height="50%" alt="top">
          {*{$twitterAuthLink}*}
        </div>
      </div>
      <div id="description">
        <div class="margin10">
<br />
Last.fmの週間トラックチャートを自動でTwitterに投稿するサービスです<br />
<br />
毎週チャートが更新された日の19時頃にTwitterにチャートが投稿されます<br />
<br />
[Sign in with Twitter]からTwitterの認証をし、次にLast.fmユーザ名を入力して登録ボタンをクリックしてください<br />
<br />
同じチャートを複数のTwitterアカウントに投稿したい場合は、投稿したいアカウント全てで認証を行なってください(複数回認証・登録を行う)<br />
        </div>
      </div>
      <div id="footer">
        <br /><span>©<a href="https://twitter.com/roswellian3120">roswellian3120</a> All rights reserved.</span>
{*
        <script type="text/javascript">
        var nowProtocol = (("https:" == document.location.protocol) ? "https://" : "http://");
        var changeProtocol = (("https:" == nowProtocol) ? "http://" : "https://");
        var pageURL = "https://analyzer1.apps.netowl.jp/js/analyze-sv1-76006353.js";
        if( pageURL.indexOf( nowProtocol ) != 0 ){
        if( pageURL.indexOf( changeProtocol ) == 0 ){
        pageURL = pageURL.replace( changeProtocol, nowProtocol );
        }else{
        pageURL = nowProtocol + pageURL;
        }
        }
        document.write(unescape("%3Cscript src='" + pageURL + "' type='text/javascript'%3E%3C/script%3E"));
        </script>
        <script type="text/javascript">
        <!--
        var cid='76006353';
        set_script(cid);
        // -->
        </script>
        <noscript>
        <a href="http://www.netowl.jp/">
        <img src="https://analyzer1.apps.netowl.jp/images/analyze-sv1-76006353.gif" border="0" >
        </a>
        </noscript>
*}
     </div>
{*
      <center>
        <br>
        <a href="http://roswellian.phpapps.jp/2013/08/16/weekly_best_track/">ブログ記事はこちら</a>
        <br><br><br>
      </center>
*}
    </div>
  </body>
</html>
