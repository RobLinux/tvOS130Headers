/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKitLegacy/WebKitLegacy-Structs.h>
@class WebScriptCallFramePrivate;

@interface WebScriptCallFrame : NSObject {

	WebScriptCallFramePrivate* _private;
	id _userInfo;

}
-(void)dealloc;
-(id)userInfo;
-(void)setUserInfo:(id)arg1 ;
-(id)functionName;
-(id)exception;
-(id)_initWithGlobalObject:(id)arg1 functionName:(String*)arg2 exceptionValue:(JSValue*)arg3 ;
-(id)_convertValueToObjcValue:(JSValue*)arg1 ;
@end

