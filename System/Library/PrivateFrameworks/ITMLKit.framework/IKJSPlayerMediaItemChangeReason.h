/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:10 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <ITMLKit/IKJSPlayerMediaItemChangeReason.h>

@protocol IKJSPlayerMediaItemChangeReason <JSExport>
@property (readonly) long long UNKNOWN; 
@property (readonly) long long PLAYED_TO_END; 
@property (readonly) long long FORWARDED_TO_END; 
@property (readonly) long long ERRORED; 
@property (readonly) long long PLAYLIST_CHANGED; 
@property (readonly) long long USER_INITIATED; 
@required
-(long long)UNKNOWN;
-(long long)PLAYED_TO_END;
-(long long)FORWARDED_TO_END;
-(long long)ERRORED;
-(long long)PLAYLIST_CHANGED;
-(long long)USER_INITIATED;

@end


@interface IKJSPlayerMediaItemChangeReason : IKJSObject <IKJSPlayerMediaItemChangeReason>

@property (readonly) long long UNKNOWN; 
@property (readonly) long long PLAYED_TO_END; 
@property (readonly) long long FORWARDED_TO_END; 
@property (readonly) long long ERRORED; 
@property (readonly) long long PLAYLIST_CHANGED; 
@property (readonly) long long USER_INITIATED; 
-(id)init;
-(long long)UNKNOWN;
-(long long)PLAYED_TO_END;
-(long long)FORWARDED_TO_END;
-(long long)ERRORED;
-(long long)PLAYLIST_CHANGED;
-(long long)USER_INITIATED;
@end

