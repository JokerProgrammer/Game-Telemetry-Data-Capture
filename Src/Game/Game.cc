#include "Game/Game.h"

Game::Game(QObject *parent)
    : QObject{parent}
{

}

Game::~Game()
{

}

void Game::setIsRunning(bool newIsRunning)
{
    if(m_isRunning == newIsRunning)
        return;
    m_isRunning = newIsRunning;
    emit isRunningChanged();
}

void Game::setProcessNames(const QSet<QString>& names)
{
    if(m_processName == names)
        return;
    m_processName = names;
}

void Game::setInstallPath(const QString &newInstallPath)
{
    if(m_installPath == newInstallPath)
        return;
    m_installPath = newInstallPath;
    emit installPathChanged();
}
