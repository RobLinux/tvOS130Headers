/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSURLSessionConfiguration.h>
#import <CFNetwork/NSCopying.h>
#import <CFNetwork/NSSecureCoding.h>

@class NSURLSessionConfiguration;

@interface __NSCFURLSessionConfiguration_Immutable : NSURLSessionConfiguration <NSCopying, NSSecureCoding> {

	NSURLSessionConfiguration* _target;

}
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(CFHSTSPolicyRef)copyHSTSPolicy;
-(HTTPConnectionCacheLimits)getConnectionCacheLimits;
-(void*)_copyAttribute:(CFStringRef)arg1 ;
-(BOOL)_isProxySession;
-(id)disposition;
-(id)initWithTarget:(id)arg1 ;
@end

