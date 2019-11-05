/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <identityservicesd/NSCopying.h>
#import <identityservicesd/NSSecureCoding.h>

@class NSString, IDSURI;

@interface IDSPeerIDKey : NSObject <NSCopying, NSSecureCoding> {

	BOOL _hasMatchingURIs;
	NSString* _service;
	IDSURI* _fromURI;
	IDSURI* _toURI;

}

@property (assign,nonatomic) BOOL hasMatchingURIs;              //@synthesize hasMatchingURIs=_hasMatchingURIs - In the implementation block
@property (nonatomic,readonly) NSString * service;              //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) IDSURI * fromURI;                //@synthesize fromURI=_fromURI - In the implementation block
@property (nonatomic,readonly) IDSURI * toURI;                  //@synthesize toURI=_toURI - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)peerIDKeyWithService:(id)arg1 fromURI:(id)arg2 toURI:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)service;
-(id)initWithService:(id)arg1 fromURI:(id)arg2 toURI:(id)arg3 ;
-(IDSURI *)fromURI;
-(IDSURI *)toURI;
-(BOOL)hasMatchingURIs;
-(void)setHasMatchingURIs:(BOOL)arg1 ;
@end

