/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPRequest.h>

@class MPModelRequest;

@interface MPModelShimRequest : MPRequest {

	MPModelRequest* _modelRequest;

}

@property (nonatomic,retain) MPModelRequest * modelRequest;              //@synthesize modelRequest=_modelRequest - In the implementation block
+(Class)responseClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)middlewareClasses;
-(MPModelRequest *)modelRequest;
-(void)setModelRequest:(MPModelRequest *)arg1 ;
@end

