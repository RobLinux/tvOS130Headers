/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreParsec/PARRequest.h>
#import <CoreParsec/NSSecureCoding.h>

@class NSString;

@interface PARLookupRequest : PARRequest <NSSecureCoding> {

	NSString* _queryString;
	NSString* _queryContext;
	NSString* _domain;
	long long _lookupSelectionType;
	NSString* _appBundleId;

}

@property (nonatomic,copy) NSString * queryString;                       //@synthesize queryString=_queryString - In the implementation block
@property (nonatomic,copy) NSString * queryContext;                      //@synthesize queryContext=_queryContext - In the implementation block
@property (nonatomic,copy) NSString * domain;                            //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) long long lookupSelectionType;              //@synthesize lookupSelectionType=_lookupSelectionType - In the implementation block
@property (nonatomic,copy) NSString * appBundleId;                       //@synthesize appBundleId=_appBundleId - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)domain;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(unsigned)nwActivityLabel;
-(void)setAppBundleId:(NSString *)arg1 ;
-(NSString *)appBundleId;
-(NSString *)queryString;
-(void)setQueryString:(NSString *)arg1 ;
-(void)setLookupSelectionType:(long long)arg1 ;
-(long long)lookupSelectionType;
-(void)setQueryContext:(NSString *)arg1 ;
-(NSString *)queryContext;
@end

