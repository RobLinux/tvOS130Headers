/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/NSCopying.h>

@class NSString, UIImage, NSURL, NSArray;

@interface AVContentProposal : NSObject <NSCopying> {

	double _automaticAcceptanceInterval;
	NSString* _title;
	UIImage* _previewImage;
	NSURL* _URL;
	NSArray* _metadata;
	SCD_Struct_AV1 _contentTimeForTransition;

}

@property (nonatomic,readonly) SCD_Struct_AV1 contentTimeForTransition;              //@synthesize contentTimeForTransition=_contentTimeForTransition - In the implementation block
@property (assign,nonatomic) double automaticAcceptanceInterval;                     //@synthesize automaticAcceptanceInterval=_automaticAcceptanceInterval - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UIImage * previewImage;                               //@synthesize previewImage=_previewImage - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                            //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSArray * metadata;                                       //@synthesize metadata=_metadata - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(NSString *)title;
-(NSArray *)metadata;
-(void)setMetadata:(NSArray *)arg1 ;
-(UIImage *)previewImage;
-(id)initWithContentTimeForTransition:(SCD_Struct_AV1)arg1 title:(id)arg2 previewImage:(id)arg3 ;
-(BOOL)isEqualToContentProposal:(id)arg1 ;
-(void)setAutomaticAcceptanceInterval:(double)arg1 ;
-(SCD_Struct_AV1)contentTimeForTransition;
-(double)automaticAcceptanceInterval;
@end

