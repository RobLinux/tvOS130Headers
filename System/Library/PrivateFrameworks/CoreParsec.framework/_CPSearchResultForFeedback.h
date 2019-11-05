/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <CoreParsec/_CPSearchResultForFeedback.h>
@class NSString, _CPActionItemForFeedback, _CPPunchoutForFeedback, _CPStruct, NSData;


@protocol _CPSearchResultForFeedback <NSObject>
@property (nonatomic,copy) NSString * identifier; 
@property (assign,nonatomic) int topHit; 
@property (nonatomic,retain) _CPActionItemForFeedback * action; 
@property (nonatomic,retain) _CPPunchoutForFeedback * punchout; 
@property (assign,nonatomic) int type; 
@property (nonatomic,copy) NSString * srf; 
@property (nonatomic,retain) _CPStruct * localFeatures; 
@property (nonatomic,copy) NSString * resultType; 
@property (assign,nonatomic) double rankingScore; 
@property (assign,nonatomic) BOOL isStaticCorrection; 
@property (assign,nonatomic) unsigned long long queryId; 
@property (nonatomic,copy) NSString * intendedQuery; 
@property (nonatomic,copy) NSString * correctedQuery; 
@property (nonatomic,copy) NSString * completedQuery; 
@property (assign,nonatomic) BOOL isLocalApplicationResult; 
@property (assign,nonatomic) BOOL publiclyIndexable; 
@property (nonatomic,copy) NSString * fbr; 
@property (nonatomic,copy) NSString * userInput; 
@property (assign,nonatomic) BOOL isFuzzyMatch; 
@property (assign,nonatomic) BOOL doNotFold; 
@property (assign,nonatomic) unsigned long long blockId; 
@property (assign,nonatomic) unsigned long long hashedIdentifier; 
@property (nonatomic,copy) NSString * resultBundleId; 
@property (assign,nonatomic) int knownResultBundleId; 
@property (nonatomic,copy) NSString * sectionBundleIdentifier; 
@property (assign,nonatomic) int knownSectionBundleIdentifier; 
@property (nonatomic,copy) NSString * applicationBundleIdentifier; 
@property (assign,nonatomic) int knownApplicationBundleIdentifier; 
@property (nonatomic,copy) NSData * entityData; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (nonatomic,readonly) unsigned long long whichResultbundleidentifier; 
@property (nonatomic,readonly) unsigned long long whichSectionbundleid; 
@property (nonatomic,readonly) unsigned long long whichApplicationbundleid; 
@required
-(int)type;
-(void)setType:(int)arg1;
-(id)initWithDictionary:(id)arg1;
-(NSString *)identifier;
-(void)setIdentifier:(id)arg1;
-(NSString *)resultType;
-(_CPActionItemForFeedback *)action;
-(void)setAction:(id)arg1;
-(NSString *)applicationBundleIdentifier;
-(void)setApplicationBundleIdentifier:(id)arg1;
-(void)setResultType:(id)arg1;
-(NSString *)userInput;
-(_CPPunchoutForFeedback *)punchout;
-(void)setSectionBundleIdentifier:(id)arg1;
-(void)setPunchout:(id)arg1;
-(NSData *)jsonData;
-(NSString *)fbr;
-(void)setFbr:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(void)setQueryId:(unsigned long long)arg1;
-(unsigned long long)queryId;
-(double)rankingScore;
-(NSString *)completedQuery;
-(NSString *)correctedQuery;
-(NSString *)intendedQuery;
-(NSString *)srf;
-(BOOL)isLocalApplicationResult;
-(BOOL)isStaticCorrection;
-(BOOL)isFuzzyMatch;
-(_CPStruct *)localFeatures;
-(BOOL)publiclyIndexable;
-(NSString *)resultBundleId;
-(NSString *)sectionBundleIdentifier;
-(int)topHit;
-(BOOL)doNotFold;
-(unsigned long long)blockId;
-(void)setRankingScore:(double)arg1;
-(void)setTopHit:(int)arg1;
-(void)setLocalFeatures:(id)arg1;
-(void)setResultBundleId:(id)arg1;
-(void)setIntendedQuery:(id)arg1;
-(void)setCompletedQuery:(id)arg1;
-(void)setCorrectedQuery:(id)arg1;
-(void)setIsStaticCorrection:(BOOL)arg1;
-(void)setIsFuzzyMatch:(BOOL)arg1;
-(void)setIsLocalApplicationResult:(BOOL)arg1;
-(void)setPubliclyIndexable:(BOOL)arg1;
-(void)setUserInput:(id)arg1;
-(void)setSrf:(id)arg1;
-(void)setDoNotFold:(BOOL)arg1;
-(void)setBlockId:(unsigned long long)arg1;
-(NSData *)entityData;
-(void)setEntityData:(id)arg1;
-(void)setHashedIdentifier:(unsigned long long)arg1;
-(void)setKnownResultBundleId:(int)arg1;
-(void)setKnownSectionBundleIdentifier:(int)arg1;
-(void)setKnownApplicationBundleIdentifier:(int)arg1;
-(unsigned long long)hashedIdentifier;
-(int)knownResultBundleId;
-(int)knownSectionBundleIdentifier;
-(int)knownApplicationBundleIdentifier;
-(unsigned long long)whichResultbundleidentifier;
-(unsigned long long)whichSectionbundleid;
-(unsigned long long)whichApplicationbundleid;

@end

#import <CoreParsec/NSSecureCoding.h>

@class NSString, _CPActionItemForFeedback, _CPPunchoutForFeedback, _CPStruct, NSData;

@interface _CPSearchResultForFeedback : PBCodable <_CPSearchResultForFeedback, NSSecureCoding> {

	BOOL _isStaticCorrection;
	BOOL _isLocalApplicationResult;
	BOOL _publiclyIndexable;
	BOOL _isFuzzyMatch;
	BOOL _doNotFold;
	int _topHit;
	int _type;
	int _knownResultBundleId;
	int _knownSectionBundleIdentifier;
	int _knownApplicationBundleIdentifier;
	NSString* _identifier;
	_CPActionItemForFeedback* _action;
	_CPPunchoutForFeedback* _punchout;
	NSString* _srf;
	_CPStruct* _localFeatures;
	NSString* _resultType;
	double _rankingScore;
	unsigned long long _queryId;
	NSString* _intendedQuery;
	NSString* _correctedQuery;
	NSString* _completedQuery;
	NSString* _fbr;
	NSString* _userInput;
	unsigned long long _blockId;
	unsigned long long _hashedIdentifier;
	NSString* _resultBundleId;
	NSString* _sectionBundleIdentifier;
	NSString* _applicationBundleIdentifier;
	NSData* _entityData;
	unsigned long long _whichResultbundleidentifier;
	unsigned long long _whichSectionbundleid;
	unsigned long long _whichApplicationbundleid;

}

@property (nonatomic,copy,readonly) id<NSCopying> jsonIdentifier; 
@property (nonatomic,copy,readonly) NSString * jsonResultBundleIdentifier; 
@property (nonatomic,copy,readonly) NSString * jsonSectionBundleIdentifier; 
@property (nonatomic,copy,readonly) NSString * jsonApplicationBundleIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * identifier;                                            //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) int topHit;                                                     //@synthesize topHit=_topHit - In the implementation block
@property (nonatomic,retain) _CPActionItemForFeedback * action;                              //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) _CPPunchoutForFeedback * punchout;                              //@synthesize punchout=_punchout - In the implementation block
@property (assign,nonatomic) int type;                                                       //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * srf;                                                   //@synthesize srf=_srf - In the implementation block
@property (nonatomic,retain) _CPStruct * localFeatures;                                      //@synthesize localFeatures=_localFeatures - In the implementation block
@property (nonatomic,copy) NSString * resultType;                                            //@synthesize resultType=_resultType - In the implementation block
@property (assign,nonatomic) double rankingScore;                                            //@synthesize rankingScore=_rankingScore - In the implementation block
@property (assign,nonatomic) BOOL isStaticCorrection;                                        //@synthesize isStaticCorrection=_isStaticCorrection - In the implementation block
@property (assign,nonatomic) unsigned long long queryId;                                     //@synthesize queryId=_queryId - In the implementation block
@property (nonatomic,copy) NSString * intendedQuery;                                         //@synthesize intendedQuery=_intendedQuery - In the implementation block
@property (nonatomic,copy) NSString * correctedQuery;                                        //@synthesize correctedQuery=_correctedQuery - In the implementation block
@property (nonatomic,copy) NSString * completedQuery;                                        //@synthesize completedQuery=_completedQuery - In the implementation block
@property (assign,nonatomic) BOOL isLocalApplicationResult;                                  //@synthesize isLocalApplicationResult=_isLocalApplicationResult - In the implementation block
@property (assign,nonatomic) BOOL publiclyIndexable;                                         //@synthesize publiclyIndexable=_publiclyIndexable - In the implementation block
@property (nonatomic,copy) NSString * fbr;                                                   //@synthesize fbr=_fbr - In the implementation block
@property (nonatomic,copy) NSString * userInput;                                             //@synthesize userInput=_userInput - In the implementation block
@property (assign,nonatomic) BOOL isFuzzyMatch;                                              //@synthesize isFuzzyMatch=_isFuzzyMatch - In the implementation block
@property (assign,nonatomic) BOOL doNotFold;                                                 //@synthesize doNotFold=_doNotFold - In the implementation block
@property (assign,nonatomic) unsigned long long blockId;                                     //@synthesize blockId=_blockId - In the implementation block
@property (assign,nonatomic) unsigned long long hashedIdentifier;                            //@synthesize hashedIdentifier=_hashedIdentifier - In the implementation block
@property (nonatomic,copy) NSString * resultBundleId;                                        //@synthesize resultBundleId=_resultBundleId - In the implementation block
@property (assign,nonatomic) int knownResultBundleId;                                        //@synthesize knownResultBundleId=_knownResultBundleId - In the implementation block
@property (nonatomic,copy) NSString * sectionBundleIdentifier;                               //@synthesize sectionBundleIdentifier=_sectionBundleIdentifier - In the implementation block
@property (assign,nonatomic) int knownSectionBundleIdentifier;                               //@synthesize knownSectionBundleIdentifier=_knownSectionBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifier;                           //@synthesize applicationBundleIdentifier=_applicationBundleIdentifier - In the implementation block
@property (assign,nonatomic) int knownApplicationBundleIdentifier;                           //@synthesize knownApplicationBundleIdentifier=_knownApplicationBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSData * entityData;                                              //@synthesize entityData=_entityData - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (nonatomic,readonly) unsigned long long whichResultbundleidentifier;               //@synthesize whichResultbundleidentifier=_whichResultbundleidentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long whichSectionbundleid;                      //@synthesize whichSectionbundleid=_whichSectionbundleid - In the implementation block
@property (nonatomic,readonly) unsigned long long whichApplicationbundleid;                  //@synthesize whichApplicationbundleid=_whichApplicationbundleid - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)resultType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(_CPActionItemForFeedback *)action;
-(void)setAction:(_CPActionItemForFeedback *)arg1 ;
-(NSString *)applicationBundleIdentifier;
-(void)setApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)setResultType:(NSString *)arg1 ;
-(NSString *)userInput;
-(_CPPunchoutForFeedback *)punchout;
-(void)setSectionBundleIdentifier:(NSString *)arg1 ;
-(void)setPunchout:(_CPPunchoutForFeedback *)arg1 ;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
-(NSString *)fbr;
-(void)setFbr:(NSString *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setQueryId:(unsigned long long)arg1 ;
-(unsigned long long)queryId;
-(double)rankingScore;
-(NSString *)completedQuery;
-(NSString *)correctedQuery;
-(NSString *)intendedQuery;
-(NSString *)srf;
-(BOOL)isLocalApplicationResult;
-(BOOL)isStaticCorrection;
-(BOOL)isFuzzyMatch;
-(_CPStruct *)localFeatures;
-(BOOL)publiclyIndexable;
-(NSString *)resultBundleId;
-(NSString *)sectionBundleIdentifier;
-(int)topHit;
-(BOOL)doNotFold;
-(unsigned long long)blockId;
-(void)setRankingScore:(double)arg1 ;
-(void)setTopHit:(int)arg1 ;
-(void)setLocalFeatures:(_CPStruct *)arg1 ;
-(void)setResultBundleId:(NSString *)arg1 ;
-(void)setIntendedQuery:(NSString *)arg1 ;
-(void)setCompletedQuery:(NSString *)arg1 ;
-(void)setCorrectedQuery:(NSString *)arg1 ;
-(void)setIsStaticCorrection:(BOOL)arg1 ;
-(void)setIsFuzzyMatch:(BOOL)arg1 ;
-(void)setIsLocalApplicationResult:(BOOL)arg1 ;
-(void)setPubliclyIndexable:(BOOL)arg1 ;
-(void)setUserInput:(NSString *)arg1 ;
-(void)setSrf:(NSString *)arg1 ;
-(void)setDoNotFold:(BOOL)arg1 ;
-(void)setBlockId:(unsigned long long)arg1 ;
-(NSData *)entityData;
-(void)setEntityData:(NSData *)arg1 ;
-(id)feedbackJSON;
-(void)clearResultbundleidentifier;
-(void)clearSectionbundleid;
-(void)clearApplicationbundleid;
-(void)setHashedIdentifier:(unsigned long long)arg1 ;
-(void)setKnownResultBundleId:(int)arg1 ;
-(void)setKnownSectionBundleIdentifier:(int)arg1 ;
-(void)setKnownApplicationBundleIdentifier:(int)arg1 ;
-(unsigned long long)hashedIdentifier;
-(int)knownResultBundleId;
-(int)knownSectionBundleIdentifier;
-(int)knownApplicationBundleIdentifier;
-(unsigned long long)whichResultbundleidentifier;
-(unsigned long long)whichSectionbundleid;
-(unsigned long long)whichApplicationbundleid;
-(id<NSCopying>)jsonIdentifier;
-(NSString *)jsonSectionBundleIdentifier;
-(NSString *)jsonResultBundleIdentifier;
-(NSString *)jsonApplicationBundleIdentifier;
@end

