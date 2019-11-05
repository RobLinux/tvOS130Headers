/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/NSCoding.h>

@interface NviSignalData : NSObject <NSCoding> {

	unsigned long long _sigType;
	unsigned long long _sigGenTs;

}

@property (assign,nonatomic) unsigned long long sigType;               //@synthesize sigType=_sigType - In the implementation block
@property (assign,nonatomic) unsigned long long sigGenTs;              //@synthesize sigGenTs=_sigGenTs - In the implementation block
+(id)headerString;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)sigType;
-(id)initWithSignalType:(unsigned long long)arg1 timestamp:(unsigned long long)arg2 ;
-(unsigned long long)sigGenTs;
-(id)stringForLogging;
-(void)setSigType:(unsigned long long)arg1 ;
-(void)setSigGenTs:(unsigned long long)arg1 ;
@end

