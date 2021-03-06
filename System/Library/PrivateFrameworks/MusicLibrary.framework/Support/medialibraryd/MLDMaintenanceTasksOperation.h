/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:46:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_xpc_object;
@class ML3MusicLibrary, NSObject;

@interface MLDMaintenanceTasksOperation : NSOperation {

	ML3MusicLibrary* _library;
	NSObject*<OS_xpc_object> _activity;

}

@property (nonatomic,readonly) ML3MusicLibrary * library;                      //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> activity;              //@synthesize activity=_activity - In the implementation block
-(void)main;
-(NSObject*<OS_xpc_object>)activity;
-(ML3MusicLibrary *)library;
-(id)initWithLibrary:(id)arg1 activity:(id)arg2 ;
@end

