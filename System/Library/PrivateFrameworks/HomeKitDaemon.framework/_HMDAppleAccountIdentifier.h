/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/_HMDAccountIdentifier.h>

@class NSString;

@interface _HMDAppleAccountIdentifier : _HMDAccountIdentifier {

	NSString* _identifierString;

}

@property (copy,readonly) NSString * identifierString;              //@synthesize identifierString=_identifierString - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)namespace;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)isAuthenticated;
-(NSString *)identifierString;
-(id)initWithIdentifierString:(id)arg1 ;
@end

