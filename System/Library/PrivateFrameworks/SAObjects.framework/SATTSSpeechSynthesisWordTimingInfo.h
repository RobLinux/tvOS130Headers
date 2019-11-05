/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:28 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SATTSSpeechSynthesisWordTimingInfo : AceObject <SAAceSerializable>

@property (assign,nonatomic) long long length; 
@property (assign,nonatomic) long long offset; 
@property (nonatomic,copy) NSNumber * sampleIndex; 
@property (assign,nonatomic) float timestamp; 
@property (nonatomic,copy) NSString * word; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)speechSynthesisWordTimingInfo;
+(id)speechSynthesisWordTimingInfoWithDictionary:(id)arg1 context:(id)arg2 ;
-(long long)length;
-(void)setLength:(long long)arg1 ;
-(float)timestamp;
-(id)groupIdentifier;
-(long long)offset;
-(void)setOffset:(long long)arg1 ;
-(void)setTimestamp:(float)arg1 ;
-(NSString *)word;
-(id)encodedClassName;
-(NSNumber *)sampleIndex;
-(void)setSampleIndex:(NSNumber *)arg1 ;
-(void)setWord:(NSString *)arg1 ;
@end

