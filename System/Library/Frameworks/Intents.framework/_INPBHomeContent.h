/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBHomeContent.h>
@class NSArray, _INPBHomeFilter;


@protocol _INPBHomeContent <NSObject>
@property (nonatomic,copy) NSArray * actions; 
@property (nonatomic,readonly) unsigned long long actionsCount; 
@property (nonatomic,retain) _INPBHomeFilter * filter; 
@property (nonatomic,readonly) BOOL hasFilter; 
@required
+(Class)actionsType;
-(NSArray *)actions;
-(void)setActions:(id)arg1;
-(_INPBHomeFilter *)filter;
-(void)setFilter:(id)arg1;
-(BOOL)hasFilter;
-(unsigned long long)actionsCount;
-(id)actionsAtIndex:(unsigned long long)arg1;
-(void)clearActions;
-(void)addActions:(id)arg1;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class NSArray, _INPBHomeFilter, NSString;

@interface _INPBHomeContent : PBCodable <_INPBHomeContent, NSSecureCoding, NSCopying> {

	{?=} _has;
	BOOL __encodeLegacyGloryData;
	NSArray* _actions;
	_INPBHomeFilter* _filter;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * actions;                                                            //@synthesize actions=_actions - In the implementation block
@property (nonatomic,readonly) unsigned long long actionsCount; 
@property (nonatomic,retain) _INPBHomeFilter * filter;                                                   //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) BOOL hasFilter; 
+(BOOL)supportsSecureCoding;
+(Class)actionsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSArray *)actions;
-(void)setActions:(NSArray *)arg1 ;
-(_INPBHomeFilter *)filter;
-(void)setFilter:(_INPBHomeFilter *)arg1 ;
-(BOOL)hasFilter;
-(unsigned long long)actionsCount;
-(id)actionsAtIndex:(unsigned long long)arg1 ;
-(void)clearActions;
-(void)addActions:(id)arg1 ;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
@end

