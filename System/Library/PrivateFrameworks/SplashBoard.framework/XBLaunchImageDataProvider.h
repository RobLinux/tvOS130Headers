/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SplashBoard/SplashBoard-Structs.h>
#import <SplashBoard/XBSnapshotDataProvider.h>

@class XBSnapshotDataProviderContext, _FBSSnapshot, UIImage, NSString;

@interface XBLaunchImageDataProvider : NSObject <XBSnapshotDataProvider> {

	_FBSSnapshot* _snapshot;
	UIImage* _cachedImage;
	XBSnapshotDataProviderContext* _context;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) XBSnapshotDataProviderContext * context;              //@synthesize context=_context - In the implementation block
-(XBSnapshotDataProviderContext *)context;
-(id)fetchImage;
-(void)invalidateImage;
-(id)initWithRequest:(id)arg1 contextID:(unsigned)arg2 opaque:(BOOL)arg3 ;
@end

