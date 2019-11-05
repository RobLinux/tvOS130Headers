/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:28 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoard/PineBoard-Structs.h>
#import <PineBoard/NSCopying.h>

@interface PBBluetoothDeviceStatistics : NSObject <NSCopying> {

	unsigned long long _remoteCount;
	unsigned long long _keyboardCount;
	unsigned long long _audioDeviceCount;
	unsigned long long _gameControllerCount;
	unsigned long long _genericDeviceCount;

}

@property (assign,nonatomic) unsigned long long remoteCount;                      //@synthesize remoteCount=_remoteCount - In the implementation block
@property (assign,nonatomic) unsigned long long keyboardCount;                    //@synthesize keyboardCount=_keyboardCount - In the implementation block
@property (assign,nonatomic) unsigned long long audioDeviceCount;                 //@synthesize audioDeviceCount=_audioDeviceCount - In the implementation block
@property (assign,nonatomic) unsigned long long gameControllerCount;              //@synthesize gameControllerCount=_gameControllerCount - In the implementation block
@property (assign,nonatomic) unsigned long long genericDeviceCount;               //@synthesize genericDeviceCount=_genericDeviceCount - In the implementation block
@property (nonatomic,readonly) unsigned long long totalDeviceCount; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)remoteCount;
-(unsigned long long)keyboardCount;
-(unsigned long long)audioDeviceCount;
-(unsigned long long)gameControllerCount;
-(unsigned long long)genericDeviceCount;
-(unsigned long long)totalDeviceCount;
-(void)setRemoteCount:(unsigned long long)arg1 ;
-(void)setKeyboardCount:(unsigned long long)arg1 ;
-(void)setAudioDeviceCount:(unsigned long long)arg1 ;
-(void)setGameControllerCount:(unsigned long long)arg1 ;
-(void)setGenericDeviceCount:(unsigned long long)arg1 ;
@end

