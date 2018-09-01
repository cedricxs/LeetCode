/*author     :      cedricxs
 *level      :      hard
 */
/**
 * @param {string} s
 * @return {boolean}
 */
//string.trim 去掉字符串两边的空格
var isNumber = function(s) {
    s = s.trim();
    if(s.length===0)return false;
    return !isNaN(s);
};