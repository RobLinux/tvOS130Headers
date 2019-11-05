/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/Navigation-Structs.h>
#import <Navigation/NSCopying.h>

@class VSSpeechRequest;

@interface MNDurationRequestKey : NSObject <NSCopying> {

	VSSpeechRequest* _speechRequest;

}

@property (nonatomic,readonly) VSSpeechRequest * speechRequest;              //@synthesize speechRequest=_speechRequest - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(VSSpeechRequest *)speechRequest;
-(id)initWithSpeechRequest:(id)arg1 ;
@end

