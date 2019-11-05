/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/DOMStyleSheet.h>

@class DOMCSSRule, DOMCSSRuleList;

@interface DOMCSSStyleSheet : DOMStyleSheet

@property (readonly) DOMCSSRule * ownerRule; 
@property (readonly) DOMCSSRuleList * cssRules; 
@property (readonly) DOMCSSRuleList * rules; 
-(DOMCSSRuleList *)cssRules;
-(unsigned)insertRule:(id)arg1 index:(unsigned)arg2 ;
-(void)deleteRule:(unsigned)arg1 ;
-(unsigned)insertRule:(id)arg1 :(unsigned)arg2 ;
-(DOMCSSRule *)ownerRule;
-(DOMCSSRuleList *)rules;
-(int)addRule:(id)arg1 style:(id)arg2 index:(unsigned)arg3 ;
-(void)removeRule:(unsigned)arg1 ;
@end

