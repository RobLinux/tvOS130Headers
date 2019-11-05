/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaPredicate.h>
#import <MediaPlayer/MPPProtobufferCoding.h>

@class NSString;

@interface MPMediaPropertyPredicate : MPMediaPredicate <MPPProtobufferCoding> {

	NSString* _property;
	id _value;
	long long _comparisonType;

}

@property (nonatomic,copy) NSString * property; 
@property (nonatomic,copy) id value; 
@property (assign,nonatomic) long long comparisonType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)predicateWithValue:(id)arg1 forProperty:(id)arg2 ;
+(id)predicateWithValue:(id)arg1 forProperty:(id)arg2 comparisonType:(long long)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(NSString *)property;
-(void)setProperty:(NSString *)arg1 ;
-(long long)comparisonType;
-(void)setComparisonType:(long long)arg1 ;
-(id)initWithProtobufferDecodableObject:(id)arg1 ;
-(id)protobufferEncodableObject;
-(id)descriptionOfValue:(id)arg1 forProperty:(id)arg2 ;
-(id)_ML3PredicateForML3EntityProperty:(id)arg1 ;
-(id)ML3PredicateForTrack;
-(id)ML3PredicateForContainer;
@end

