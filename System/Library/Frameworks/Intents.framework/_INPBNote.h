/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBNote.h>
@class NSArray, _INPBDateTime, _INPBDataString, NSString;


@protocol _INPBNote <NSObject>
@property (nonatomic,copy) NSArray * contents; 
@property (nonatomic,readonly) unsigned long long contentsCount; 
@property (nonatomic,retain) _INPBDateTime * createdDateTime; 
@property (nonatomic,readonly) BOOL hasCreatedDateTime; 
@property (nonatomic,retain) _INPBDataString * groupName; 
@property (nonatomic,readonly) BOOL hasGroupName; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) _INPBDateTime * modifiedDateTime; 
@property (nonatomic,readonly) BOOL hasModifiedDateTime; 
@property (nonatomic,retain) _INPBDataString * title; 
@property (nonatomic,readonly) BOOL hasTitle; 
@required
+(Class)contentType;
-(NSString *)identifier;
-(void)setIdentifier:(id)arg1;
-(NSArray *)contents;
-(_INPBDataString *)title;
-(void)setTitle:(id)arg1;
-(void)setContents:(id)arg1;
-(_INPBDataString *)groupName;
-(void)setGroupName:(id)arg1;
-(BOOL)hasTitle;
-(BOOL)hasIdentifier;
-(BOOL)hasGroupName;
-(_INPBDateTime *)createdDateTime;
-(void)setCreatedDateTime:(id)arg1;
-(BOOL)hasCreatedDateTime;
-(_INPBDateTime *)modifiedDateTime;
-(void)setModifiedDateTime:(id)arg1;
-(BOOL)hasModifiedDateTime;
-(void)clearContents;
-(unsigned long long)contentsCount;
-(void)addContent:(id)arg1;
-(id)contentAtIndex:(unsigned long long)arg1;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class NSArray, _INPBDateTime, _INPBDataString, NSString;

@interface _INPBNote : PBCodable <_INPBNote, NSSecureCoding, NSCopying> {

	{?=} _has;
	BOOL __encodeLegacyGloryData;
	NSArray* _contents;
	_INPBDateTime* _createdDateTime;
	_INPBDataString* _groupName;
	NSString* _identifier;
	_INPBDateTime* _modifiedDateTime;
	_INPBDataString* _title;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * contents;                                                           //@synthesize contents=_contents - In the implementation block
@property (nonatomic,readonly) unsigned long long contentsCount; 
@property (nonatomic,retain) _INPBDateTime * createdDateTime;                                            //@synthesize createdDateTime=_createdDateTime - In the implementation block
@property (nonatomic,readonly) BOOL hasCreatedDateTime; 
@property (nonatomic,retain) _INPBDataString * groupName;                                                //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupName; 
@property (nonatomic,copy) NSString * identifier;                                                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) _INPBDateTime * modifiedDateTime;                                           //@synthesize modifiedDateTime=_modifiedDateTime - In the implementation block
@property (nonatomic,readonly) BOOL hasModifiedDateTime; 
@property (nonatomic,retain) _INPBDataString * title;                                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
+(BOOL)supportsSecureCoding;
+(Class)contentType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSArray *)contents;
-(id)dictionaryRepresentation;
-(_INPBDataString *)title;
-(void)setTitle:(_INPBDataString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setContents:(NSArray *)arg1 ;
-(_INPBDataString *)groupName;
-(void)setGroupName:(_INPBDataString *)arg1 ;
-(BOOL)hasTitle;
-(BOOL)hasIdentifier;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(BOOL)hasGroupName;
-(_INPBDateTime *)createdDateTime;
-(void)setCreatedDateTime:(_INPBDateTime *)arg1 ;
-(BOOL)hasCreatedDateTime;
-(_INPBDateTime *)modifiedDateTime;
-(void)setModifiedDateTime:(_INPBDateTime *)arg1 ;
-(BOOL)hasModifiedDateTime;
-(void)clearContents;
-(unsigned long long)contentsCount;
-(void)addContent:(id)arg1 ;
-(id)contentAtIndex:(unsigned long long)arg1 ;
@end

