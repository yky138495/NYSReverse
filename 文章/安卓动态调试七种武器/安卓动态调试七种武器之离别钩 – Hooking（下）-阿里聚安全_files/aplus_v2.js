/* v6.1.16,6.1.22,0.5 2016-07-14 19:03:25 */
!function e(t,r,o){function n(i,c){if(!r[i]){if(!t[i]){var s="function"==typeof require&&require;if(!c&&s)return s(i,!0);if(a)return a(i,!0);throw new Error("Cannot find module '"+i+"'")}var l=r[i]={exports:{}};t[i][0].call(l.exports,function(e){var r=t[i][1][e];return n(r?r:e)},l,l.exports,e,t,r,o)}return r[i].exports}for(var a="function"==typeof require&&require,i=0;i<o.length;i++)n(o[i]);return n}({1:[function(e,t,r){t.exports=e("./src/grey")},{"./src/grey":2}],2:[function(e,t,r){function o(e){if(e)try{var t=h.createElement("script");t.appendChild(h.createTextNode(e)),y.parentNode.insertBefore(t,y)}catch(r){(g.execScript||function(e){g.eval.call(g,e)})(e)}}function n(e,t,r){if(/blitz/i.test(p))return void r();var o,n="GET",a=function(){o.responseText?t(o.responseText):r()};m?(o=new XMLHttpRequest,o.open(n,e,!0)):(o=new XDomainRequest,o.open(n,e)),o.timeout=w.timeout,o.onload=a,o.onerror=r,o.ontimeout=r,o.send()}function a(e,t){var r=h.createElement("script");r.async=!0,i(r,t),r.src=e,y.parentNode.insertBefore(r,y)}function i(e,t){function r(){e.onreadystatechange=e.onload=null,e=null,x(t)&&t({from:"script"})}if("onload"in e)e.onload=r;else{var o=function(){/loaded|complete/.test(e.readyState)&&r()};e.onreadystatechange=o,o()}}function c(e,t){return e+Math.floor(Math.random()*(t-e+1))}function s(e,t){return c(1,t)<=e}function l(e,t){var r;for(r in t)t.hasOwnProperty(r)&&(e[r]=t[r]);return e}function u(e,t){return function(r){return e.call(null,l(t,r||{}))}}function f(e){return function(t){return{}.toString.call(t)=="[object "+e+"]"}}var g=window,h=document,p=navigator.userAgent,y=h.getElementsByTagName("script")[0],d=g.XDomainRequest,m=g.XMLHttpRequest&&"withCredentials"in new XMLHttpRequest,b=function(){},v={set:function(e,t){try{return localStorage.setItem(e,t),!0}catch(r){return!1}},get:function(e){return localStorage.getItem(e)},test:function(){var e="grey_test_key";try{return localStorage.setItem(e,1),localStorage.removeItem(e),!0}catch(t){return!1}}},w={base:1e4,timeout:1e4},_={_config:w};_.load=function(e){e=l({stable:"",stableKey:"",stableHash:"",grey:"",greyKey:"",greyHash:"",base:w.base},e);var t,r,i,c,f=e.hash,g={};if(e.ratio>=e.base||s(e.ratio,e.base)?(t=e.greyKey,r=e.grey,c=e.greyHash,g.type="grey"):(t=e.stableKey,r=e.stable,c=e.stableHash,g.type="stable"),g.url=r,g.key=t,g.hash=c,x(e.before)&&e.before(g),e.after=x(e.after)?u(e.after,g):b,v.test()&&t&&(m||d)&&x(f))if(i=v.get(t),i&&c===f(i,g))try{o(i),e.after({from:"local"})}catch(h){a(r,e.after)}else n(r,function(r){v.set(t,r),o(r),e.after({from:"cors"})},function(){a(r,e.after)});else a(r,e.after);return this},_.config=function(e){return l(w,e||{}),this};var x=(Array.isArray||f("Array"),f("Function"));t.exports=_},{}],3:[function(e,t,r){"use strict";!function(){var t=window,r="g_aplus_grey_launched";if(!t[r]){t[r]=1;var o=e("@ali/grey-publish"),n=location.protocol;0!=n.indexOf("http")&&(n="http:");var a,i=n+"//g.alicdn.com/alilog/s",c="aplus_v2.js",s=5e3,l=[/^https?:\/\/www\.taobao\.com\/?$/i,/^https?:\/\/(.*\.)?sycm\.taobao\.com/i,/^https?:\/\/(.*\.)?pm\.alibaba-inc\.com/i,/^https?:\/\/(.*\.)?ecrm\.taobao\.com/i,/^https?:\/\/(.*\.)?jxtportal\.taobao\.com/i];for(a=0;a<l.length;a++){if(location.href.match(l[a])){s=1e4;break}s=0}var u="aplus_grey_ratio";"number"==typeof t[u]&&(s=Math.floor(1e4*t[u]));var f=location.search.match(new RegExp("\\b"+u+"=([\\d\\.]+)"));f&&(f=parseFloat(f[1]),isNaN(f)||(s=Math.floor(1e4*f))),t.goldlog=t.goldlog||{},goldlog.record||(goldlog.record=function(e,r,o,n){(t.goldlog_queue||(t.goldlog_queue=[])).push({action:"goldlog.record",arguments:[e,r,o,n]})}),o.load({stable:[i,"6.1.16",c].join("/"),grey:[i,"6.1.22",c].join("/"),ratio:s,stableKey:"APLUSGREYs_aplus_v2",greyKey:"APLUSGREYg_aplus_v2",stableHash:"6ee997ce",greyHash:"1d9a3e14",hash:e("./hash").hash,before:function(e){goldlog.lver="grey"==e.type?"6.1.22":"6.1.16"}})}}()},{"./hash":4,"@ali/grey-publish":1}],4:[function(e,t,r){"use strict";r.hash=function(e){var t,r,o=1315423911;for(t=e.length-1;t>=0;t--)r=e.charCodeAt(t),o^=(o<<5)+r+(o>>2);return(2147483647&o).toString(16)}},{}]},{},[3]);