/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ROCKit.framework/ROCKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ROCKit/ROCKRemoteProxy.h>

@class NSMethodSignature;

@interface ROCKRemoteBlockProxy : ROCKRemoteProxy {

	NSMethodSignature* _methodSignature;

}

@property (nonatomic,retain) NSMethodSignature * methodSignature;              //@synthesize methodSignature=_methodSignature - In the implementation block
@property (nonatomic,readonly) const char* signature; 
@property (nonatomic,readonly) BOOL stret; 
+(id)blockProxyWithSessionManager:(id)arg1 xpcDictionary:(id)arg2 ;
-(id)debugDescription;
-(id)description;
-(NSMethodSignature *)methodSignature;
-(const char*)signature;
-(void)setMethodSignature:(NSMethodSignature *)arg1 ;
-(id)initWithSessionManager:(id)arg1 xpcDictionary:(id)arg2 ;
-(BOOL)stret;
@end

