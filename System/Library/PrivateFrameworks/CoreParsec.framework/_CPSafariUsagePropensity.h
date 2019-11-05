/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <CoreParsec/_CPSafariUsagePropensity.h>
@class NSData;


@protocol _CPSafariUsagePropensity <NSObject>
@property (assign,nonatomic) float localGoto; 
@property (assign,nonatomic) float localTap; 
@property (assign,nonatomic) float parsecGoto; 
@property (assign,nonatomic) float parsecTap; 
@property (assign,nonatomic) float thirdPartyGoto; 
@property (assign,nonatomic) float thirdPartyTap; 
@property (assign,nonatomic) float thirdPartyCompletionOrRecentSearch; 
@property (assign,nonatomic) float goToSite; 
@property (assign,nonatomic) float other; 
@property (assign,nonatomic) int totalEngagements; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(NSData *)jsonData;
-(float)other;
-(id)initWithJSON:(id)arg1;
-(void)setOther:(float)arg1;
-(void)setTotalEngagements:(int)arg1;
-(int)totalEngagements;
-(void)setLocalGoto:(float)arg1;
-(void)setLocalTap:(float)arg1;
-(void)setParsecGoto:(float)arg1;
-(void)setParsecTap:(float)arg1;
-(void)setThirdPartyGoto:(float)arg1;
-(void)setThirdPartyTap:(float)arg1;
-(void)setThirdPartyCompletionOrRecentSearch:(float)arg1;
-(void)setGoToSite:(float)arg1;
-(float)localGoto;
-(float)localTap;
-(float)parsecGoto;
-(float)parsecTap;
-(float)thirdPartyGoto;
-(float)thirdPartyTap;
-(float)thirdPartyCompletionOrRecentSearch;
-(float)goToSite;

@end

#import <CoreParsec/NSSecureCoding.h>

@class NSData, NSString;

@interface _CPSafariUsagePropensity : PBCodable <_CPSafariUsagePropensity, NSSecureCoding> {

	float _localGoto;
	float _localTap;
	float _parsecGoto;
	float _parsecTap;
	float _thirdPartyGoto;
	float _thirdPartyTap;
	float _thirdPartyCompletionOrRecentSearch;
	float _goToSite;
	float _other;
	int _totalEngagements;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) float localGoto;                                       //@synthesize localGoto=_localGoto - In the implementation block
@property (assign,nonatomic) float localTap;                                        //@synthesize localTap=_localTap - In the implementation block
@property (assign,nonatomic) float parsecGoto;                                      //@synthesize parsecGoto=_parsecGoto - In the implementation block
@property (assign,nonatomic) float parsecTap;                                       //@synthesize parsecTap=_parsecTap - In the implementation block
@property (assign,nonatomic) float thirdPartyGoto;                                  //@synthesize thirdPartyGoto=_thirdPartyGoto - In the implementation block
@property (assign,nonatomic) float thirdPartyTap;                                   //@synthesize thirdPartyTap=_thirdPartyTap - In the implementation block
@property (assign,nonatomic) float thirdPartyCompletionOrRecentSearch;              //@synthesize thirdPartyCompletionOrRecentSearch=_thirdPartyCompletionOrRecentSearch - In the implementation block
@property (assign,nonatomic) float goToSite;                                        //@synthesize goToSite=_goToSite - In the implementation block
@property (assign,nonatomic) float other;                                           //@synthesize other=_other - In the implementation block
@property (assign,nonatomic) int totalEngagements;                                  //@synthesize totalEngagements=_totalEngagements - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)jsonData;
-(float)other;
-(id)initWithJSON:(id)arg1 ;
-(void)setOther:(float)arg1 ;
-(void)setTotalEngagements:(int)arg1 ;
-(int)totalEngagements;
-(void)setLocalGoto:(float)arg1 ;
-(void)setLocalTap:(float)arg1 ;
-(void)setParsecGoto:(float)arg1 ;
-(void)setParsecTap:(float)arg1 ;
-(void)setThirdPartyGoto:(float)arg1 ;
-(void)setThirdPartyTap:(float)arg1 ;
-(void)setThirdPartyCompletionOrRecentSearch:(float)arg1 ;
-(void)setGoToSite:(float)arg1 ;
-(float)localGoto;
-(float)localTap;
-(float)parsecGoto;
-(float)parsecTap;
-(float)thirdPartyGoto;
-(float)thirdPartyTap;
-(float)thirdPartyCompletionOrRecentSearch;
-(float)goToSite;
@end

