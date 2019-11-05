/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBSnoozeTasksIntent.h>
@class _INPBIntentMetadata, _INPBDateTimeRange, NSArray;


@protocol _INPBSnoozeTasksIntent <NSObject>
@property (assign,nonatomic) BOOL all; 
@property (assign,nonatomic) BOOL hasAll; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata; 
@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (nonatomic,retain) _INPBDateTimeRange * nextTriggerTime; 
@property (nonatomic,readonly) BOOL hasNextTriggerTime; 
@property (nonatomic,copy) NSArray * tasks; 
@property (nonatomic,readonly) unsigned long long tasksCount; 
@required
+(Class)tasksType;
-(NSArray *)tasks;
-(void)setTasks:(id)arg1;
-(BOOL)all;
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(id)arg1;
-(BOOL)hasIntentMetadata;
-(void)clearTasks;
-(void)addTasks:(id)arg1;
-(id)tasksAtIndex:(unsigned long long)arg1;
-(unsigned long long)tasksCount;
-(_INPBDateTimeRange *)nextTriggerTime;
-(void)setNextTriggerTime:(id)arg1;
-(void)setAll:(BOOL)arg1;
-(BOOL)hasAll;
-(void)setHasAll:(BOOL)arg1;
-(BOOL)hasNextTriggerTime;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class _INPBIntentMetadata, _INPBDateTimeRange, NSArray, NSString;

@interface _INPBSnoozeTasksIntent : PBCodable <_INPBSnoozeTasksIntent, NSSecureCoding, NSCopying> {

	SCD_Struct_IN3 _has;
	BOOL _all;
	BOOL __encodeLegacyGloryData;
	_INPBIntentMetadata* _intentMetadata;
	_INPBDateTimeRange* _nextTriggerTime;
	NSArray* _tasks;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL all;                                                                   //@synthesize all=_all - In the implementation block
@property (assign,nonatomic) BOOL hasAll; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata;                                       //@synthesize intentMetadata=_intentMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (nonatomic,retain) _INPBDateTimeRange * nextTriggerTime;                                       //@synthesize nextTriggerTime=_nextTriggerTime - In the implementation block
@property (nonatomic,readonly) BOOL hasNextTriggerTime; 
@property (nonatomic,copy) NSArray * tasks;                                                              //@synthesize tasks=_tasks - In the implementation block
@property (nonatomic,readonly) unsigned long long tasksCount; 
+(BOOL)supportsSecureCoding;
+(Class)tasksType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)tasks;
-(void)setTasks:(NSArray *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)all;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(_INPBIntentMetadata *)arg1 ;
-(BOOL)hasIntentMetadata;
-(void)clearTasks;
-(void)addTasks:(id)arg1 ;
-(id)tasksAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)tasksCount;
-(_INPBDateTimeRange *)nextTriggerTime;
-(void)setNextTriggerTime:(_INPBDateTimeRange *)arg1 ;
-(void)setAll:(BOOL)arg1 ;
-(BOOL)hasAll;
-(void)setHasAll:(BOOL)arg1 ;
-(BOOL)hasNextTriggerTime;
@end

