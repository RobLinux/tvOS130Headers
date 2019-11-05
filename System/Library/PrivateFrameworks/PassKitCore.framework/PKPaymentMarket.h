/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/NSSecureCoding.h>

@class NSDictionary, NSSet, NSString;

@interface PKPaymentMarket : NSObject <NSSecureCoding> {

	NSDictionary* _localizedNames;
	NSSet* _geoFences;
	long long _type;
	long long _classification;
	NSString* _identifier;
	NSString* _region;
	NSSet* _supportedCredentialTypes;
	NSSet* _expressCredentialTypes;
	NSSet* _supportedTransitNetworks;
	NSSet* _expressTransitNetworks;

}

@property (readonly) long long type;                                     //@synthesize type=_type - In the implementation block
@property (readonly) long long classification;                           //@synthesize classification=_classification - In the implementation block
@property (copy,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSString * region;                             //@synthesize region=_region - In the implementation block
@property (copy,readonly) NSSet * supportedCredentialTypes;              //@synthesize supportedCredentialTypes=_supportedCredentialTypes - In the implementation block
@property (copy,readonly) NSSet * expressCredentialTypes;                //@synthesize expressCredentialTypes=_expressCredentialTypes - In the implementation block
@property (copy,readonly) NSSet * supportedTransitNetworks;              //@synthesize supportedTransitNetworks=_supportedTransitNetworks - In the implementation block
@property (copy,readonly) NSSet * expressTransitNetworks;                //@synthesize expressTransitNetworks=_expressTransitNetworks - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)region;
-(BOOL)containsLocation:(id)arg1 ;
-(long long)classification;
-(id)initWithDictionary:(id)arg1 forDeviceClass:(id)arg2 version:(id)arg3 ;
-(double)shortestDistanceFromLocation:(id)arg1 ;
-(NSSet *)supportedCredentialTypes;
-(NSSet *)expressCredentialTypes;
-(NSSet *)supportedTransitNetworks;
-(NSSet *)expressTransitNetworks;
-(id)_geoFenceWithDictionary:(id)arg1 ;
@end

