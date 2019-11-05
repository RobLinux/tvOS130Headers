/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SharedWebCredentials/SharedWebCredentials-Structs.h>
#import <SharedWebCredentials/SWCRedactedDescription.h>
#import <SharedWebCredentials/NSCopying.h>
#import <SharedWebCredentials/NSSecureCoding.h>

@class NSString;

@interface _SWCApplicationIdentifier : NSObject <SWCRedactedDescription, NSCopying, NSSecureCoding> {

	unsigned long long _hash;
	NSString* _prefix;
	NSString* _bundleIdentifier;

}

@property (readonly) NSString * rawValue; 
@property (readonly) NSString * prefix;                        //@synthesize prefix=_prefix - In the implementation block
@property (readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (getter=isValid,readonly) BOOL valid; 
+(id)new;
+(BOOL)supportsSecureCoding;
+(BOOL)isCaseSensitive;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)redactedDescription;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)prefix;
-(NSString *)rawValue;
-(BOOL)isEqualToApplicationIdentifierIgnoringPrefix:(id)arg1 ;
-(id)initForBundleProxy:(id)arg1 ;
@end

