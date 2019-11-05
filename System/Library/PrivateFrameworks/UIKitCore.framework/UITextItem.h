/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSURL, NSTextAttachment;


@protocol UITextItem <NSObject>
@property (nonatomic,readonly) NSArray * rects; 
@property (nonatomic,readonly) NSRange range; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) NSURL * link; 
@property (nonatomic,readonly) NSTextAttachment * attachment; 
@required
-(long long)type;
-(NSRange)range;
-(NSURL *)link;
-(NSTextAttachment *)attachment;
-(NSArray *)rects;

@end

