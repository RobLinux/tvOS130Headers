/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSExtension, NSUUID;

@interface _UIRemoteViewService : NSObject {

	BOOL _overridesHostAppearance;
	NSExtension* _extension;
	NSUUID* _contextToken;

}

@property (nonatomic,retain) NSExtension * extension;                     //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain) id<PKPlugIn> plugin; 
@property (nonatomic,readonly) BOOL overridesHostAppearance;              //@synthesize overridesHostAppearance=_overridesHostAppearance - In the implementation block
@property (nonatomic,copy) NSUUID * contextToken;                         //@synthesize contextToken=_contextToken - In the implementation block
-(NSExtension *)extension;
-(void)setPlugin:(id<PKPlugIn>)arg1 ;
-(id<PKPlugIn>)plugin;
-(void)setExtension:(NSExtension *)arg1 ;
-(id)initWithExtension:(id)arg1 andContextToken:(id)arg2 ;
-(NSUUID *)contextToken;
-(BOOL)overridesHostAppearance;
-(void)updateOverridesHostAppearance;
-(id)initWithPlugIn:(id)arg1 andContextToken:(id)arg2 ;
-(void)setContextToken:(NSUUID *)arg1 ;
@end

