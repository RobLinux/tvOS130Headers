/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SAUIAudioDescription : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * bitsPerChannel; 
@property (nonatomic,copy) NSNumber * bytesPerFrame; 
@property (nonatomic,copy) NSNumber * bytesPerPacket; 
@property (nonatomic,copy) NSNumber * channelsPerFrame; 
@property (nonatomic,copy) NSString * format; 
@property (nonatomic,copy) NSNumber * formatFlags; 
@property (nonatomic,copy) NSNumber * formatID; 
@property (nonatomic,copy) NSNumber * framesPerPacket; 
@property (nonatomic,copy) NSNumber * reserved; 
@property (nonatomic,copy) NSNumber * sampleRate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)audioDescription;
+(id)audioDescriptionWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)reserved;
-(void)setReserved:(NSNumber *)arg1 ;
-(id)groupIdentifier;
-(NSString *)format;
-(void)setFormat:(NSString *)arg1 ;
-(NSNumber *)sampleRate;
-(void)setSampleRate:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(NSNumber *)bitsPerChannel;
-(void)setBitsPerChannel:(NSNumber *)arg1 ;
-(NSNumber *)bytesPerFrame;
-(void)setBytesPerFrame:(NSNumber *)arg1 ;
-(NSNumber *)bytesPerPacket;
-(void)setBytesPerPacket:(NSNumber *)arg1 ;
-(NSNumber *)channelsPerFrame;
-(void)setChannelsPerFrame:(NSNumber *)arg1 ;
-(NSNumber *)formatFlags;
-(void)setFormatFlags:(NSNumber *)arg1 ;
-(NSNumber *)formatID;
-(void)setFormatID:(NSNumber *)arg1 ;
-(NSNumber *)framesPerPacket;
-(void)setFramesPerPacket:(NSNumber *)arg1 ;
@end

