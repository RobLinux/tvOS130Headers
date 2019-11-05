/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKeyboardKeyplaneTransformation.h>

@class NSString;

@interface UIKBContinuousPathModalKeysTransformation : NSObject <UIKeyboardKeyplaneTransformation>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transformationIdentifier;
+(id)transformKeyplane:(id)arg1 withTransformationContext:(id)arg2 ;
+(id)rollbackKeyplane:(id)arg1 withTransformationContext:(id)arg2 ;
+(id)_donorKeyplaneForKeyplane:(id)arg1 transformationContext:(id)arg2 ;
+(id)_donorControlKeysForLastDisplayRowForKeyplane:(id)arg1 transformationContext:(id)arg2 ;
@end

