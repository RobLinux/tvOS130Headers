/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIDictationToken.h>
#import <UIKitCore/NSSecureCoding.h>

@interface UIDictationScoredToken : UIDictationToken <NSSecureCoding> {

	double _confidenceScore;

}

@property (nonatomic,readonly) double confidenceScore;              //@synthesize confidenceScore=_confidenceScore - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)confidenceScore;
-(id)initWithText:(id)arg1 removeSpaceBefore:(BOOL)arg2 removeSpaceAfter:(BOOL)arg3 confidenceScore:(double)arg4 ;
-(id)_descriptionExtra;
@end

