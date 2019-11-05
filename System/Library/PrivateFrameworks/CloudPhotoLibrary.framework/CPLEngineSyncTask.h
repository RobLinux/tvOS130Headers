/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPLEngineSyncTaskDelegate, NSCoding;
@class CPLEngineLibrary, CPLSyncSession, NSString;

@interface CPLEngineSyncTask : NSObject {

	BOOL _foreground;
	BOOL _forceSync;
	BOOL _cancelled;
	id<CPLEngineSyncTaskDelegate> _delegate;
	CPLEngineLibrary* _engineLibrary;
	CPLSyncSession* _session;
	id<NSCoding> _transportUserIdentifier;
	NSString* _phaseDescription;

}

@property (setter=_setCancelled:,getter=isCancelled) BOOL cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
@property (retain) id<CPLEngineSyncTaskDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CPLEngineLibrary * engineLibrary;                  //@synthesize engineLibrary=_engineLibrary - In the implementation block
@property (nonatomic,readonly) CPLSyncSession * session;                          //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) id<NSCoding> transportUserIdentifier;                //@synthesize transportUserIdentifier=_transportUserIdentifier - In the implementation block
@property (assign,nonatomic) BOOL foreground;                                     //@synthesize foreground=_foreground - In the implementation block
@property (assign,nonatomic) BOOL forceSync;                                      //@synthesize forceSync=_forceSync - In the implementation block
@property (nonatomic,readonly) NSString * taskIdentifier; 
@property (readonly) NSString * phaseDescription;                                 //@synthesize phaseDescription=_phaseDescription - In the implementation block
+(id)taskWithEngineLibrary:(id)arg1 session:(id)arg2 ;
-(id)description;
-(id<CPLEngineSyncTaskDelegate>)delegate;
-(void)setDelegate:(id<CPLEngineSyncTaskDelegate>)arg1 ;
-(void)cancel;
-(CPLSyncSession *)session;
-(NSString *)taskIdentifier;
-(BOOL)isCancelled;
-(void)launch;
-(void)setForeground:(BOOL)arg1 ;
-(BOOL)forceSync;
-(void)setForceSync:(BOOL)arg1 ;
-(CPLEngineLibrary *)engineLibrary;
-(id)initWithEngineLibrary:(id)arg1 session:(id)arg2 ;
-(void)taskDidFinishWithError:(id)arg1 ;
-(NSString *)phaseDescription;
-(unsigned long long)diskPressureState;
-(void)taskDidProgress:(float)arg1 userInfo:(id)arg2 ;
-(id<NSCoding>)transportUserIdentifier;
-(void)setTransportUserIdentifier:(id<NSCoding>)arg1 ;
-(BOOL)foreground;
-(void)_setCancelled:(BOOL)arg1 ;
@end

