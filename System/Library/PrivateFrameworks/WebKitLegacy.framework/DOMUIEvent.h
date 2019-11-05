/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/DOMEvent.h>

@class DOMAbstractView;

@interface DOMUIEvent : DOMEvent

@property (readonly) DOMAbstractView * view; 
@property (readonly) int detail; 
@property (readonly) int keyCode; 
@property (readonly) int charCode; 
@property (readonly) int layerX; 
@property (readonly) int layerY; 
@property (readonly) int pageX; 
@property (readonly) int pageY; 
@property (readonly) int which; 
-(int)keyCode;
-(int)detail;
-(DOMAbstractView *)view;
-(int)charCode;
-(int)layerX;
-(int)layerY;
-(int)pageX;
-(int)pageY;
-(int)which;
-(void)initUIEvent:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3 view:(id)arg4 detail:(int)arg5 ;
-(void)initUIEvent:(id)arg1 :(BOOL)arg2 :(BOOL)arg3 :(id)arg4 :(int)arg5 ;
@end

