/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/DOMObject.h>

@class NSString;

@interface DOMTokenList : DOMObject

@property (readonly) unsigned length; 
@property (copy) NSString * value; 
-(void)dealloc;
-(unsigned)length;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(BOOL)contains:(id)arg1 ;
-(id)item:(unsigned)arg1 ;
-(BOOL)toggle:(id)arg1 force:(BOOL)arg2 ;
@end

