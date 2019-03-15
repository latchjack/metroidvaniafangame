//
//  PlayerProjectile.h
//  Metroidvania
//
//  Created by nick vancise on 5/25/18.


#import <Foundation/Foundation.h>
#import <SpriteKit/SpriteKit.h>

@interface PlayerProjectile : SKSpriteNode

@property (nonatomic,assign) BOOL cleanup;
-(instancetype)initWithPos:(CGPoint)pos andMag_Range:(int)mag_range andType:(NSString*)type andDirection:(BOOL) direction;

@end
