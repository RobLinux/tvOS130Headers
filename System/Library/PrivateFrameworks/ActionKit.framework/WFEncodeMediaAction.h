/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFAction.h>

@class NSMutableArray;

@interface WFEncodeMediaAction : WFAction {

	NSMutableArray* _exportSessions;

}

@property (nonatomic,retain) NSMutableArray * exportSessions;              //@synthesize exportSessions=_exportSessions - In the implementation block
-(void)cancel;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)initializeParameters;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(void)finishRunningWithError:(id)arg1 ;
-(id)nonEmptyStringValueForKey:(id)arg1 ;
-(void)getMetadataItems:(/*^block*/id)arg1 ;
-(id)metadataForAsset:(id)arg1 newMetadata:(id)arg2 ;
-(void)encodeItems:(id)arg1 metadata:(id)arg2 ;
-(void)updateSpeedVisibility;
-(NSMutableArray *)exportSessions;
-(void)setExportSessions:(NSMutableArray *)arg1 ;
@end

