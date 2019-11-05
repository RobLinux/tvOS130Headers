/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@class NSMutableArray;

@interface AVInternalDeviceList : NSObject {

	/*^block*/id changeListener;
	NSMutableArray* deviceList;
	opaque_pthread_mutex_t listLock;

}

@property (nonatomic,copy) id changeListener; 
+(id)newDeviceList;
+(id)defaultDeviceOfType:(unsigned)arg1 ;
-(id)init;
-(void)dealloc;
-(void)cleanup;
-(unsigned)dataSourceControlID;
-(void)notifyDeviceListChanged;
-(id)deviceList;
-(void)setChangeListener:(id)arg1 ;
-(id)changeListener;
@end

