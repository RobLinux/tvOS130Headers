/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPLEngineTransportTask <NSObject>
@property (assign,nonatomic) BOOL foreground; 
@property (assign,getter=isHighPriorityBackground,nonatomic) BOOL highPriorityBackground; 
@property (assign,getter=isForcedTask,nonatomic) BOOL forcedTask; 
@property (assign,getter=isBackgroundTask,nonatomic) BOOL backgroundTask; 
@property (nonatomic,retain) id<CPLEngineTransportGroup> transportGroup; 
@required
-(void)cancel;
-(void)setForeground:(BOOL)arg1;
-(void)runWithinSyncSession:(id)arg1;
-(void)setTransportGroup:(id)arg1;
-(void)runWithNoSyncSession;
-(void)setForcedTask:(BOOL)arg1;
-(void)setHighPriorityBackground:(BOOL)arg1;
-(BOOL)foreground;
-(BOOL)isBackgroundTask;
-(void)setBackgroundTask:(BOOL)arg1;
-(BOOL)isHighPriorityBackground;
-(BOOL)isForcedTask;
-(id<CPLEngineTransportGroup>)transportGroup;

@end
