/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/ICDocumentAction.h>

@class WFFileRepresentation;

@interface ICPostToInstagramAction : ICDocumentAction {

	WFFileRepresentation* _instagramRepresentation;

}

@property (nonatomic,retain) WFFileRepresentation * instagramRepresentation;              //@synthesize instagramRepresentation=_instagramRepresentation - In the implementation block
-(void)dealloc;
-(id)inputContentClasses;
-(void)performActionWithInput:(id)arg1 parameters:(id)arg2 userInterface:(id)arg3 successHandler:(/*^block*/id)arg4 errorHandler:(/*^block*/id)arg5 ;
-(void)appDidResume:(id)arg1 ;
-(void)shareAsALAssetWithItem:(id)arg1 caption:(id)arg2 userInterface:(id)arg3 successHandler:(/*^block*/id)arg4 errorHandler:(/*^block*/id)arg5 ;
-(void)shareAsImageFileWithItem:(id)arg1 caption:(id)arg2 userInterface:(id)arg3 successHandler:(/*^block*/id)arg4 errorHandler:(/*^block*/id)arg5 ;
-(WFFileRepresentation *)instagramRepresentation;
-(void)setInstagramRepresentation:(WFFileRepresentation *)arg1 ;
@end
