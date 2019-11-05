/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/_DKObject.h>
#import <CoreDuet/_DKProtobufConverting.h>
#import <CoreDuet/_DKHasComparableValue.h>
#import <CoreDuet/_DKHasPrimaryValue.h>

@class NSDate, _DKEventStream, _DKObject, NSTimeZone, NSDictionary, NSString;

@interface _DKEvent : _DKObject <_DKProtobufConverting, _DKHasComparableValue, _DKHasPrimaryValue> {

	BOOL _shouldSync;
	NSDate* _startDate;
	NSDate* _endDate;
	_DKEventStream* _stream;
	_DKObject* _value;
	NSTimeZone* _timeZone;
	NSDictionary* _metadata;
	double _confidence;
	long long _compatibilityVersion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) _DKEventStream * stream;                         //@synthesize stream=_stream - In the implementation block
@property (retain) NSDate * startDate;                              //@synthesize startDate=_startDate - In the implementation block
@property (retain) NSDate * endDate;                                //@synthesize endDate=_endDate - In the implementation block
@property (retain) NSTimeZone * timeZone;                           //@synthesize timeZone=_timeZone - In the implementation block
@property (retain) _DKObject * value;                               //@synthesize value=_value - In the implementation block
@property (copy) NSDictionary * metadata;                           //@synthesize metadata=_metadata - In the implementation block
@property (assign) double confidence;                               //@synthesize confidence=_confidence - In the implementation block
@property (assign) BOOL shouldSync;                                 //@synthesize shouldSync=_shouldSync - In the implementation block
@property (assign) long long compatibilityVersion;                  //@synthesize compatibilityVersion=_compatibilityVersion - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)entityName;
+(id)fromPBCodable:(id)arg1 ;
+(id)eventWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 value:(id)arg4 metadata:(id)arg5 ;
+(id)eventWithStream:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 value:(id)arg5 confidence:(double)arg6 metadata:(id)arg7 ;
+(id)eventWithStream:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 identifierStringValue:(id)arg5 metadata:(id)arg6 ;
+(id)allowedWebpageURLSchemes;
+(BOOL)isValidURL:(id)arg1 ;
+(id)eventWithSearchableItem:(id)arg1 bundleIdentifier:(id)arg2 ;
+(id)eventRepresentingUserActivityWithSearchableItem:(id)arg1 bundleIdentifier:(id)arg2 ;
+(id)eventWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 identifierStringValue:(id)arg4 metadata:(id)arg5 ;
+(id)metadataForInteraction:(id)arg1 storeKeyImage:(BOOL)arg2 ;
+(id)eventWithInteraction:(id)arg1 bundleIdentifier:(id)arg2 storeKeyImage:(BOOL)arg3 ;
+(id)keyPathForMOKeyPath:(id)arg1 ;
+(id)moKeyPathForKeyPath:(id)arg1 ;
+(id)objectFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 cache:(id)arg3 ;
+(id)eventValueFromManagedObject:(id)arg1 streamName:(id)arg2 readMetadata:(BOOL)arg3 cache:(id)arg4 ;
+(id)eventStreamFromManagedObject:(id)arg1 forValue:(id)arg2 cache:(id)arg3 ;
+(id)eventWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 value:(id)arg4 ;
+(id)uncachedEventValueFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 cache:(id)arg3 ;
+(BOOL)copyMetadata:(id)arg1 toManagedObject:(id)arg2 ;
+(id)fetchCustomMetadataWithName:(id)arg1 valueHash:(id)arg2 context:(id)arg3 ;
+(id)eventWithStream:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 categoryIntegerValue:(long long)arg5 confidence:(double)arg6 metadata:(id)arg7 ;
+(id)eventWithStream:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 quantityDoubleValue:(double)arg5 confidence:(double)arg6 metadata:(id)arg7 ;
+(id)eventWithStream:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 identifierStringValue:(id)arg5 confidence:(double)arg6 metadata:(id)arg7 ;
+(id)eventWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 value:(id)arg4 confidence:(double)arg5 metadata:(id)arg6 ;
+(id)eventWithStream:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 categoryIntegerValue:(long long)arg5 metadata:(id)arg6 ;
+(id)eventWithStream:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 quantityDoubleValue:(double)arg5 metadata:(id)arg6 ;
+(id)eventWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 categoryIntegerValue:(long long)arg4 metadata:(id)arg5 ;
+(id)eventWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 quantityDoubleValue:(double)arg4 metadata:(id)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(double)doubleValue;
-(BOOL)boolValue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)stringValue;
-(long long)integerValue;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSTimeZone *)timeZone;
-(_DKObject *)value;
-(void)setValue:(_DKObject *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(double)confidence;
-(NSDictionary *)metadata;
-(_DKEventStream *)stream;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(id)interaction;
-(void)setConfidence:(double)arg1 ;
-(long long)compatibilityVersion;
-(void)setStream:(_DKEventStream *)arg1 ;
-(long long)compareValue:(id)arg1 ;
-(id)primaryValue;
-(id)toPBCodable;
-(BOOL)shouldSync;
-(void)setShouldSync:(BOOL)arg1 ;
-(void)setCompatibilityVersion:(long long)arg1 ;
-(void)fetchInteractionWithPopulatedKeyImage:(/*^block*/id)arg1 ;
-(BOOL)copyToManagedObject:(id)arg1 ;
-(id)metadataFromStructuredMetadata:(id)arg1 ;
-(id)metadataFromCustomMetadata:(id)arg1 ;
-(id)metadataFromCustomMetadata:(id)arg1 cache:(id)arg2 ;
-(id)metadataFromStructuredMetadata:(id)arg1 cache:(id)arg2 ;
-(unsigned long long)eventValueClassOf:(id)arg1 ;
-(id)initWithStream:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 value:(id)arg5 confidence:(double)arg6 metadata:(id)arg7 ;
@end

